Program Agenda;

function menuOperacoes() : integer;
var op : integer;
begin
		writeln('1 - Inclusao  de  novo  telefone');
		writeln('2 - Alterar  numero  de telefone');
		writeln('3 - Exclusao  de numero telefone');
		writeln('4 - Impressao de agenda completa');
		writeln('5 - Ordenacao lista tel.por nome');
		writeln('6 - Consultar  agenda  por  nome');
		writeln('7 - Armaz.. de  dados em arquivo');
		writeln('8 - Recup.. de dados  do arquivo');
		writeln('0 -           < Sair >          ');
		write('>>>>> ');
		readln(op);
		menuOperacoes := op;
end;

const MAX = 100;

type informacoes = record
		nome : string;
		fone : string;
end;

var 
	agenda : array[1..MAX] of informacoes;
	leitura : array[1..MAX] of informacoes;
  	i, j, op, contador : integer;
	telefone, temp : string;
	dados : text;

Begin
	op := -1;
	contador := 0;

	while(op <> 0) do begin
	
		op := menuOperacoes;

		if (op = 1) then begin
			contador := contador + 1;
			if (contador = MAX) then
				writeln('A agenda esta cheia!')
			else begin
				write('Nome: ');
				readln(agenda[contador].nome);
				write('Fone: ');
				readln(agenda[contador].fone);
			end;
			readln;
			clrscr;
		end;

		if (op = 2) then begin
			if (contador = 0) then
				writeln('Nenhum telefone cadastrado!')
			else begin
				write('Digite o nome do contato: ');
				readln(temp);
				for i:= 1 to contador do begin
					if (temp = agenda[i].nome) then begin
						write('Digite o novo numero: ');
						readln(telefone);
						agenda[i].fone := telefone;
						writeln('Numero alterado com sucesso!');
					end;
				end;
			end;
			readln;
			clrscr;
		end;
		
		if (op = 3) then begin
			if (contador = 0) then
				writeln('Nenhum telefone cadastrado!')
			else begin
				write('Digite o numero de telefone: ');
				readln(telefone);
				for i := 1 to contador do begin
					if (telefone = agenda[i].fone) then begin
						agenda[i].nome := '';
						agenda[i].fone := '';
						writeln('Telefone excluido!');
					end;
				end;
			end;
			readln;
			clrscr;
		end;

		if (op = 4) then begin
			if (contador = 0) then
				writeln('Nenhum telefone cadastrado!')
			else begin
				for i := 1 to contador do begin
					if ((agenda[i].nome <> '') and (agenda[i].fone <> '')) then Begin
						writeln('Nome: ', agenda[i].nome);
						writeln('Fone: ', agenda[i].fone);
					end;
				end;
			end;
			readln;
			clrscr;
		end;

		if (op = 5) then begin
			if (contador = 0) then
				writeln('Nenhum telefone cadastrado!')
			else begin 
				for i := 1 to contador - 1 do begin
					for j := i + 1 to contador do begin 
						if (agenda[i].nome > agenda[j].nome) then begin
							temp := agenda[i].nome;
							telefone := agenda[i].fone;
							agenda[i].nome := agenda[j].nome;
							agenda[i].fone := agenda[j].fone;
							agenda[j].nome := temp;
							agenda[j].fone := telefone;
						end;
					end;
				end;
				writeln('Lista ordenada!');
			end;
			readln;
			clrscr;
		end;

		if (op = 6) then begin
			if (contador = 0) then
				writeln('Nenhum telefone cadastrado!')
			else begin
				write('Informe o nome: ');
				readln(temp);
				for i := 1 to contador do begin
					if (temp = agenda[i].nome) then 
						writeln('Fone: ', agenda[i].fone);
				end;
			end;
			readln;
			clrscr;
		end;
		
		if (op = 7) then begin
			if (contador = 0) then
				writeln('Nenhum telefone cadastrado!')
			else begin
				assign(dados, 'dados.txt');
				rewrite(dados);

				for i := 1 to contador do begin
					if ((agenda[i].nome <> '') and (agenda[i].fone <> '')) then begin
						writeln(dados, agenda[i].nome);
						writeln(dados, agenda[i].fone);
					end;
				end;
				close(dados);
				writeln('Arquivo criado na pasta de exec!');
			end;
			readln;
			clrscr;
		end;

		if (op = 8) then begin
			assign(dados, 'dados.txt');
			reset(dados);
			while not EOF(dados) do begin
				for i := 1 to contador do begin
						readln(dados, leitura[i].nome);
						readln(dados, leitura[i].fone);
				end;
			end;
			close(dados);
			writeln('Dados do arquivo: ');
			for i := 1 to contador do begin
				if ((leitura[i].nome <> '') and (leitura[i].fone <> '')) then begin
					writeln('Nome: ', leitura[i].nome);
					writeln('Fone: ', leitura[i].fone);
				end;
			end;
			readln;
			clrscr;
		end;

	end;
End.