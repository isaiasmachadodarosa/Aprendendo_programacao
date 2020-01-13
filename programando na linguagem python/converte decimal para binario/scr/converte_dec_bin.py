class ConverteDecimalBinario:

    def __init__(self):
        pass

    def testa_valor_decimal(self):
        numero_decimal = int(input('digite um valor entre 0 e 15!\n'))
        while numero_decimal < 0 or numero_decimal > 15:
            numero_decimal = int(input('digite um valor entre 0 e 15!\n'))
        return numero_decimal

    def valor_binario(self, valor_decimal):
        binario = []
        valor = valor_decimal
        for indice in range(4):
            if valor % 2 == 1:
                binario.append(True)
            else:
                binario.append(False)
            valor = valor // 2
        binario.reverse()
        return binario

    def exibe_conversao(self, val_binario):
        print(val_binario)

    def testa_senha(self, val_binario):
        if (not valor_binario[0] and valor_binario[1]) or (
                not valor_binario[0] and valor_binario[2] and valor_binario[3]) or (
                valor_binario[0] and not valor_binario[1] and not valor_binario[2]):
            print('Acesso permitido!')
        else:
            print('Acesso negado!')


if __name__ == '__main__':
    testa_entrada = ConverteDecimalBinario
    fim_laco = -1
    while fim_laco != 0:
        val_decimal = ConverteDecimalBinario.testa_valor_decimal(testa_entrada)
        valor_binario = ConverteDecimalBinario.valor_binario(testa_entrada, val_decimal)
        ConverteDecimalBinario.exibe_conversao(testa_entrada, valor_binario)
        ConverteDecimalBinario.testa_senha(testa_entrada, valor_binario)
        fim_laco = int(input('digite 0 para sair ou outro valor para continuar.\n'))
