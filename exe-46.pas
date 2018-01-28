Program Supermercado;
const TAM = 3;

type registro = record
 	codigo : integer;
	descri : string;
	precoU : real;
end;
		  
var produto : array[1..TAM] of registro;		  
	   i, j : integer;
	   temp : string;
	
Begin

	for i := 1 to TAM do begin
		write('Codigo: ');
		readln(produto[i].codigo);
		write('Descricao: ');
		readln(produto[i].descri);
		write('Preco: ');
		readln(produto[i].precoU);
	end;
  
    	for i := 1 to TAM-1 do begin
		for j := i+1 to TAM do begin
			if (produto[i].descri > produto[j].descri) then begin
				temp := produto[i].descri;
				produto[i].descri := produto[j].descri;
				produto[j].descri := temp;
			end;
		end;
	end;

	writeln('Produtos ordenados:');
	for i := 1 to TAM do 
		writeln(produto[i].descri);
  
End.
