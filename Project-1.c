/*
Feito por: Mark662 - data: 09/04/2021
Primeiro projeto feito em .C para explicação de códigos básicos para iniciantes.
Estou postando esse artigo para ensinos, portanto, o conhecimento será obtido por vocês
e será usado conforme bem desejarem. (não me responsabilizo pelo mal uso do conhecimento de vocês.)

é permitido a modificação do código para melhorias e adição de novos conteúdos, portanto, caso
for postar no GitHub, dê-me os créditos, caso contrário, terá o conteúdo derrubado por denuncias.

*/

/* Includes são diretivas que informam o processador que irá utilizar outros arquivos que estão no repositório,
 portanto, o #include funciona basicamente como uma forma de chamada de bibliotecas. (Importa um biblioteca.)
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

/*
A função main retorna um inteiro para o SO (sistema operacional). Para isso, será utilizado int main().
Portanto, podemos usar o return para encerrar a função main(), e passar um inteiro para o SO.
*/
int main() {

    /*
    A função/variavel char armazena caracteres. (char, abreviação de character). Uma variável do tipo char, ocupa
    1 byte (8 bits) e pode ser usada para armazenar um valor inteiro sem sinal, (unsigned char) entre 0 e 255 ou
    com um valor com sinal (char) entre 128 a 127. lembrando que ela pode ser usada como um número, tanto quanto 
    um caractere.
    */

    char welcome[50];

        /*
        A função printf, é nada mais um meio de imprimir uma mensagem ou alguma função de uma variável na tela.
        Ex: Quero imprimir um Hello World (Olá mundo) no meu console, apenas digito printf("Hello World").
        Mas se caso eu queira imprimir a função de uma variável? Bom, apenas cria uma variável e chame-a usando
        o printf.

        */
        printf("Seja bem vindo ao meu primeiro projeto em C.\n");
        printf("Criado por Mark662.\n\n");


        /*
        A função strcpy, realiza a cópia de um conteúdo de uma variável a outra. Lembrando que ambas devems er strings.
        Lembrando que para a cópia ser realizada, deve se especificar o tamanho a ser copiado em char.
        Por exemplo: O meu char welcome[50] é possível digitar apenas 50 carecteres, porém, caso me convenha
        color 100, eu terei o limite máximo de 100 caracteres para serem digitados.
        */
        strcpy(welcome, "dir"); /*Caso esteja executando no Linux, troque dir para ls.*/

        /*
        A funão system(), tem como objetivo executar comandos declarados em uma variavel ou simplesmente executar
        comandos que estejam dentro de seus parâmetros. Ex: system("ping www.google.com"). Lembrando que, pela system(),
        podem ser feitas alterações da shell, dependendo dos comandos que lhe foram inseridas.
        */

        system(welcome);

        /*
        A função return 0; ao final do código, serve para informar ao compilador que ouve tudo certo com a função main().
        Caso a main() retornasse um valor diferente de 0, haveria um problema na execução do codigo, na qual seria informada
        ao compilador.
        */
    return 0;

    /*
    Fecha main().
    */
}