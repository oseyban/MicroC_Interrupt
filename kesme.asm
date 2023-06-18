_ButtonKesme:
;kesme.c,1 :: 		void ButtonKesme() iv IVT_INT_EXTI0 ics ICS_AUTO{
;kesme.c,2 :: 		}
L_end_ButtonKesme:
BX	LR
; end of _ButtonKesme
_main:
;kesme.c,3 :: 		void main() {
;kesme.c,5 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
