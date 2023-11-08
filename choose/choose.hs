--
-- Compute "n choose k", the binary coefficient formula, recursively
--
-- Jim Teresco, Siena College, CSIS 340, Fall 2019

choose :: (Integral a) => a -> a -> a
choose n k
    | k > n = error "invalid"
    | k == 0 = 1
    | n == k = 1
    | otherwise = ((choose (n-1) (k-1)) + (choose (n-1) k))
