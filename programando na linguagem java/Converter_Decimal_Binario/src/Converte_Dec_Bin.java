import javax.swing.JOptionPane;
// classe que converte decimal em binario
public class Converte_Dec_Bin {

	private int testa_val_dec() {
		int numDecimal = -1;

		while (numDecimal < 0 || numDecimal > 15) {
			numDecimal = Integer.parseInt(JOptionPane.showInputDialog("Digite um valor entre 0 e 15"));
		}
		return numDecimal;
	}

	private boolean[] valor_em_binario(int valor_decimal) {
		boolean[] binario;
		int valor;

		valor = valor_decimal;

		binario = new boolean[4];

		for (int i = 3; i >= 0; i--) {

			if (valor % 2 == 1) {
				binario[i] = true;
			} else {
				binario[i] = false;
			}

			valor = valor / 2;
		}

		return binario;
	}

	private void exibe_conversao(boolean[] val_binario) {
		JOptionPane.showMessageDialog(null,
				String.valueOf(val_binario[0] + " " + val_binario[1] + " " + val_binario[2] + " " + val_binario[3]));
	}

	private void testa_senha(boolean[] val_binario) {
		if ((!val_binario[0] && val_binario[1]) || (!val_binario[0] && val_binario[2] && val_binario[3])
				|| (val_binario[0] && !val_binario[1] && !val_binario[2])) {
			JOptionPane.showMessageDialog(null, "Acesso permitido!");
		} else {
			JOptionPane.showMessageDialog(null, "Acesso negado!");
		}

	}

	public static void main(String[] args) {
		int sai_prog;
		Converte_Dec_Bin conv;
		boolean[] binario;

		conv = new Converte_Dec_Bin();

		sai_prog = 1;

		while (sai_prog != 0) {

			binario = conv.valor_em_binario(conv.testa_val_dec());

			conv.exibe_conversao(binario);

			conv.testa_senha(binario);

			sai_prog = Integer
					.parseInt(JOptionPane.showInputDialog("Digite 0 para sair ou outro valor para continuar."));

		}
	}
}
