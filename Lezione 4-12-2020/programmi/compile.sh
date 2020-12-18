cd Documenti/lezione3/Programmi
echo 'Inserisci il nome del programma'
read nome

gcc ${nome}.c -o ${nome}.out
echo ' '
./${nome}.out
