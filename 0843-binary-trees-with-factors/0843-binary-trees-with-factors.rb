# @param {Integer[]} arr
# @return {Integer}
def num_factored_binary_trees(arr)
    arr.sort!
        dp = {}

        arr.each do |i|
            dp[i] = 1

            arr.each do |j|
                if i % j == 0 && dp.key?(i / j)
                    dp[i] += dp[j] * dp[i / j]
                end
            end
        end

        result = 0
        dp.values.each { |val| result += val }

        result % (10**9 + 7)
    end