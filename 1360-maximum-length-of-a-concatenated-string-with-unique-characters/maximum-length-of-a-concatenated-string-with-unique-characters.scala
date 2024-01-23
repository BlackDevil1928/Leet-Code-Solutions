object Solution {
    def maxLength(list: List[String]): Int = {
        def recCount(subList: List[String], res: String = ""): Int = {
            val x: Int = subList match {
                case Nil => 0
                case m :: Nil => if((m+res).length == (m+res).distinct.length) (m+res).length else res.length
                case m => {
                    recCount(m.drop(1), res + (if((m.head+res).length== (m.head+res).distinct.length) m.head else "")) max recCount(m.drop(1), res)
                }
            }
            x
        }
        recCount(list)
    }   
}