class Solution {
    private $a;

    public function __construct() {
        $this->a = ord('a');
    }

    function mask($str) {
        $mask = 0;
        for ($i = strlen($str) - 1; $i >= 0; $i--) {
            $bit = 2 ** (ord($str[$i]) - $this->a);
            if ($mask & $bit) {
                return -1;
            }
            $mask |= $bit;
        }
        return $mask;
    }

    /**
     * @param String[] $arr
     * @return Integer
     */
    function maxLength($arr) {
        $masks = [0];
        foreach ($arr as $s) {
            $sMask = $this->mask($s);
            if ($sMask == -1) {
                continue;
            }
            foreach ($masks as $mask) {
                if ($mask & $sMask) {
                    continue;
                }
                $masks[] = $mask | $sMask;
            }
        }

        $max = 0;
        foreach ($masks as $mask) {
            $max = max($max, substr_count(decbin($mask), '1'));
        }
        return $max;
    }
}