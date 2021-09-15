#include <iostream>

using namespace std ;

int main ()

{
	int num1, num2, res ;
	
    char op ;
   
   inicio:
    
    cout << " primeiro numero : " "\n" ;
    
    cin >> num1 ;
    
    cout << "escolha a operacao:  [+, -, /, *, ]"  "\n"   ;
     
    cin >> op  ;
    
    cout << " segundo numero : " "\n" ;
    
    cin >> num2  ;
    
    if (op == '+')
    {
    	res = num1 + num2 ; }
    
	if (op == '-') 
     {
   	   res = num1 - num2  ; }
   	   
   	 
   if  (op == '/') 
     {
   	   res = num1 / num2  ; }     
   	   
   	   
   	 if (op == '*')
    {
    	res = num1 * num2 ; }   
   	     

	cout << "o numero e : "  << res  << endl ;                                  
    
    goto inicio ;
}
		


       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
    


