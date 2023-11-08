;
; Compute "n choose k", the binary coefficient formula, recursively
; Jim Teresco, Siena College, CSIS-340, Fall 2023

(define (choose n k)
  (cond ((> k n) "error: invalid")
	((= k 0) 1)
	((= k n) 1)
	(#t (+ (choose (- n 1) (- k 1))
	       (choose (- n 1) k)))
	)
  )
