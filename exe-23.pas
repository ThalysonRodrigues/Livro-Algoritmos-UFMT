Program Eleicao;

var voto, cand1, cand2, cand3, cand4, nulo, branco, prim, total : integer;
		
Begin
		 cand1 := 0;  cand2 := 0;
		 cand3 := 0;  cand4 := 0;
		 nulo := 0;   branco := 0; 
		 
		 voto := -1;
		 
		 while (voto <> 0) do begin
		 		write('Vote: ');
				readln(voto);
				
				case voto of 
					 	1 : cand1 := cand1 + 1;
					 	2 : cand2 := cand2 + 1;
					 	3 : cand3 := cand3 + 1;
					 	4 : cand4 := cand4 + 1;
					 	5 : nulo := nulo + 1;
					 	6 : branco := branco + 1;
				end;
		 end;
		 
		 total := cand1 + cand2 + cand3 + cand4 + nulo + branco; 
		 
		 writeln('TOTAL DE VOTOS!');
		 writeln('Candidato 01: ', cand1);
		 writeln('Candidato 02: ', cand2);
		 writeln('Candidato 03: ', cand3);
		 writeln('Candidato 04: ', cand4);
		 writeln('Votos em branco: ', branco);
		 writeln('Votos nulos: ', nulo);
		 writeln('Percentual de nulos/brancos sobre o total: ', ((nulo + branco) * 100)/ total:0:2,'%');
		 
		 if (cand1 > cand2) and (cand1 > cand3) and (cand1 > cand4) then
		 		prim := cand1
		 else if (cand2 > cand1) and (cand2 > cand3) and (cand2 > cand4) then
		 		prim := cand2
		 else if (cand3 > cand1) and (cand3 > cand2) and (cand3 > cand4) then
		 		prim := cand3
		 else if (cand4 > cand1) and (cand4 > cand2) and (cand4 > cand3) then 
		 		prim := cand4;
		 	
		 if (prim > (total-prim)) then
		 	  writeln('O candidato obteve o maior numero de votos absolutos!')
		 else
		    writeln('Não conseguiu mais votos que os outros candidatos somados!');	 
End.