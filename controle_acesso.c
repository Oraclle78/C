# include <stdio.h>
# include <windows.h>
# include <string.h>

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char user_adm[30], passwd_adm[30], user_reg[30], passwd_reg[30],user_conv[30], passwd_conv[30],login[30], passwd [30];
    // Área de cadastro do usuário
    printf ("=======CADASTRO DE USUÁRIO NO SISTEMA========\n");
    printf ("\nCadastre um nome para Administrador: ");
    gets (user_adm);
    printf ("Informe o password para Administrador: ");
    gets(passwd_adm);
    printf ("\nx=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n");

    printf ("\nCadastre um nome para usuário Regular: ");
    gets (user_reg);
    printf ("Informe o password para usuário Regular: ");
    gets(passwd_reg);
    printf ("\nx=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n");

    printf ("\nCadastre um nome para usuário Convidado: ");
    gets (user_conv);
    printf ("Informe o password para usuário Convidado: ");
    gets(passwd_conv);
    printf ("\nx=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n");

    //Login do Sistema baseado nos usuários cadastraados
    printf("\n===============================");
    printf ("\n------Login de Sistema--------");
    printf("\n===============================");

    printf ("\nUsuário: ");
    gets (login);

    //Verifica a exisitência do usuário
    while (strcmp(login, user_adm) != 0 && strcmp(login, user_reg) != 0 && strcmp(login, user_conv) != 0)
    {
        printf ("Usuário inválido! Tente novamente!");
        printf ("\nUsuário: ");
        gets (login);
    }

    printf ("Senha: ");
    gets (passwd);

    //Após validar o usuário, é realizado a validação da senha de acordo com o usuário digitado.
    // Em caso de sucesso, exibe uma mensagem com seu acesso.

    if (strcmp(login, user_adm) == 0)
    {
        while (strcmp (passwd, passwd_adm) != 0)
        {
            printf ("Senha Inválida! Tente novamente!");
            printf ("\nSenha: ");
            gets (passwd);
        }
    printf ("\nLogin realizado com sucesso!");
    printf ("\nSeja bem-vindo %s!", login);
    printf ("\nVocê é um usuário Administrador e tem acesso total ao Sistema!\n");
        
    }

    else if (strcmp(login, user_reg) == 0)
    {
        while (strcmp (passwd, passwd_reg) != 0)
        {
            printf ("Senha Inválida! Tente novamente!");
            printf ("\nSenha: ");
            gets (passwd);
        }
    printf ("\nLogin realizado com sucesso!");
    printf ("\nSeja bem-vindo %s", login);
    printf ("\nVocê é um usuário Regular e tem acesso limitado apenas a algumas informações!\n");
        
    }

    else if (strcmp(login, user_conv) == 0)
    {
        while (strcmp (passwd, passwd_conv) != 0)
        {
            printf ("Senha Inválida! Tente novamente!");
            printf ("\nSenha: ");
            gets (passwd);
        }
    printf ("\nLogin realizado com sucesso!");
    printf ("\nSeja bem-vindo %s!", login);
    printf ("\nVocê é um usuário Convidado e tem acesso extremamente limitado");
    printf ("\ne só poderá visualizar informações básicas!\n");
        
    }
printf("\n==========FIM DO PROGRAMA===========");

    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}