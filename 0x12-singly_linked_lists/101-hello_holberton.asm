section .data
	format db "Hello, Holberton", 0
	newline db 10, 0 ; ASCII value of new line

section .text
	global main
	extern printf

main:
	mov edi, format
	xor eax, eax
	call printf

	mov edi, newline
	xor eax, eax
	call printf

	xor eax, eax
	ret
