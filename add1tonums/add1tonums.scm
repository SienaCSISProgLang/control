;
; Functions to add 1 to any numbers in a list
;
; Based on LISP code from Neal Mazur, CS 144, Union College, Spring 1990
; Jim Teresco, CSC 433, The College of Saint Rose, Fall 2012
; Updated for CSIS-340, Siena College, Fall 2023
;
; The first one only adds 1 to numbers at the "top level"
(define (add1_num lst)
  (cond ((null? lst) ())
	((number? (car lst))
	 (cons (+ 1 (car lst)) (add1_num (cdr lst))))
	(#t (cons (car lst) (add1_num (cdr lst))))
  )
)

; The second also adds 1 to numbers inside nested lists
(define (add1_num_deep lst)
  (cond ((null? lst) ())
	((number? (car lst))
	 (cons (+ 1 (car lst)) (add1_num_deep (cdr lst))))
	((list? (car lst))
	 (cons (add1_num_deep (car lst)) (add1_num_deep (cdr lst))))
	(#t (cons (car lst) (add1_num_deep (cdr lst))))
  )
)
