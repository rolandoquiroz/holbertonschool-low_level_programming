
	global 	main
	extern 	printf

	section .text
main:
	mov	rdi, format 	;set 1st parameter (format)
	mov	rax, 0
	call	printf 		;printf(format, )
	mov	rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0 ;C strings need a zero byte at the end
