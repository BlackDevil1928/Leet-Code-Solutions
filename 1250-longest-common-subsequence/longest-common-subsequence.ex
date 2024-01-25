defmodule Solution do
  @spec longest_common_subsequence(text1 :: String.t, text2 :: String.t) :: integer
  def longest_common_subsequence(text1, text2) do
    text1 = String.to_charlist(text1)
    text2 = String.to_charlist(text2)

    dp =
      text1
      |> Enum.with_index()
      |> Enum.reduce(%{}, fn {c1, c1i}, dp ->
        text2
        |> Enum.with_index()
        |> Enum.reduce(dp, fn {c2, c2i}, dp ->
          if c1 == c2 do
            Map.put(dp, {c1i, c2i}, Map.get(dp, {c1i - 1, c2i - 1}, 0) + 1)
          else
            Map.put(
              dp,
              {c1i, c2i},
              max(Map.get(dp, {c1i - 1, c2i}, 0), Map.get(dp, {c1i, c2i - 1}, 0))
            )
          end
        end)
      end)

    Map.get(dp, {length(text1) - 1, length(text2) - 1})
  end
end