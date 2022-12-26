
escribir_cadena('Wordle\n');
escribir_cadena('Introduce la palabra a encontrar (max 10 caracteres)): \n');

leer_cadena(palabra);

length:= getlength(palabra);

numerointentos:=5;
escribir_cadena('El numero de intentos es:');
escribir(numerointentos);

mientras (numerointentos > 0) hacer
    
    escribir_cadena('Introduzca su intento: ');
    leer_cadena(guessed);
    mientras (getlength(guessed) <> getlength(palabra)) hacer
        escribir_cadena('La palabra debe tener una longitud de: ');
        escribir(getlength(palabra));
        escribir_cadena('Vuelva a introducir su intento: ');
        leer_cadena(guessed);
    fin_mientras

    si (guessed = palabra) entonces
        escribir_cadena('Palabra Acertada');
        numerointentos:=0;
    si_no 
        escribir_cadena('');
        escribir_cadena('Palabra Errónea');
        escribir_cadena('');
        
        para i desde 1 hasta length hacer
            si (getnletter(palabra,i) = getnletter(guessed,i)) entonces
                escribir(i);
                escribir_cadena('Carácter Correcto');
                escribir_cadena('');
            si_no
                flag:=0;
                escribir(i);
                para j desde 1 hasta getlength(palabra) hacer
                    si (getnletter(palabra,j) = getnletter(guessed,i)) entonces
                        escribir_cadena('Carácter Correcto Pero En Posición Errónea');
                        j:=getlength(palabra);
                        flag:=1;
                    fin_si
                fin_para
                si (flag = 0) entonces
                    escribir_cadena('Carácter Incorrecto');
                fin_si
                escribir_cadena('');
            fin_si
        fin_para

        numeroIntentos:=numeroIntentos-1;
        si (numeroIntentos = 0) entonces
            escribir_cadena('Has Perdido');
        si_no
            escribir_cadena('Numero de Intentos Restantes: ');
            escribir(numerointentos);
        fin_si
        escribir_cadena('');

    fin_si

fin_mientras



