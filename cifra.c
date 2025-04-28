#include <stdio.h>
#include <string.h>

void cifraCesar(char *texto, int deslocamento) {
    for (int i = 0; i < strlen(texto); i++) {
        char ch = texto[i];

        // if para letras maiúsculas
        if (ch >= 'A' && ch <= 'Z'){
            ch = (ch  - 'A' + deslocamento) % 26 + 'A';

        } else if (ch >= 'a' && ch <='z'){// if para letras minúsculas
            ch = (ch - 'a' + deslocamento) % 26 + 'a';
        }
        texto[i] = ch; 
    }
}

int main() {
    char mensagem[100];
    int deslocamento;

    printf("Digite a mensagem:");
    fgets(mensagem, sizeof(mensagem), stdin);

    // Remover o \n que o fgets coloca no final
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Digite o quanto quer deslocar:");
    scanf("%d", &deslocamento);

    cifraCesar(mensagem, deslocamento);

    printf("Mensagem cifrada: %s\n", mensagem);
    return 0;
}