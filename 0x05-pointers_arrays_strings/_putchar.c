#include <unistd.h>                                                                                                         
/**                                                                                                                         
 *_putchar- writes the char to stdout                                                                                      
 *@c:the character to print                                                                                                
 *                                                                                                                          
 *Return: on success 1                                                                                                     
 *on error, -1 is returned, and errno is set                                                                               
 */                                                                                                                         
int _putchar(char c) 
	
{                                                                                                
	return (write(1, &c, 1));
}
