
#Programa que identifica si un numero es palindromo

escribir_cadena('Introduce el numero para comprobar si es palindromo: \n');
leer(numero);
temp:=numero;
sum:=0;    
mientras (numero>0)  hacer  
    r:=numero%10;    
    sum:=(sum*10)+r; 
    numero:=numero//10;    
fin_mientras
si (temp=sum) entonces  
    escribir_cadena('El numero es palindromo');    
si_no
    escribir_cadena('El numero no es palindromo');   

fin_si


