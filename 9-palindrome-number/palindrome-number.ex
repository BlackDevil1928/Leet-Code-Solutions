defmodule Solution do
  @spec is_palindrome(x :: integer) :: boolean
  def is_palindrome(x) do
    input = Integer.to_string(x)
    if String.contains?(input, "-") do
      false
    else
      Integer.digits(x) == Enum.reverse(Integer.digits(x))
    end
  end
end
