#include <stdio.h>
int main() {
int v,e;
int chegou_a_escada=0;
int pegou_a_chave=0;
char arma=' ';
char chave=' ';
int linha_jogador=3;
int coluna_jogador=5;
char movimento=' ';
char direcao='>';
int r=0;
do{
printf("Fadinha : Ola jogador(a)! Seja bem vindo(a) ao jogo, o que voce deseja?\n");
printf("1-Iniciar o Jogo a partir da vila\n");
printf("2-Tutorial\n");
printf("3-Sair do jogo\n");
scanf("%d", &r);

	if(r==1)
	{ 
		
		char Mapa_Vila[10][10]={
		{'*','*','*','*','*','*','*','*','*','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ','>',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ','L','*'},
		{'*','*','*','*','*','*','*','*','*','*'}
		};
        
        for(v=0;v<10;v++)
		{
			for(e=0;e<10;e++)
			{
				printf("%c ", Mapa_Vila[v][e]);
				
			}
			printf("\n");
		}
		char R;
		printf("Fadinha: Querido(a) jogador(a), siga-me até a loja do ferreiro, precisamos escolher uma arma pra você\n");
		printf("Ferreiro:Ola jogador(a), eu sou o ferreiro da vila e dono desse estabelecimento, voce deseja comprar uma arma aqui no 'Mortes Sangrentas'?(S/N)");
		scanf(" %c", &R);
		if(R=='S' || R=='s')
		{
			
			char  escolha=' ';
			printf("Ferreiro:Oh, que coisa boa, extremamente boa\n");
			printf("Nesse caso, pode escolher uma de nossas tres armas do estoque\n");
			printf("E-espada\n");
			printf("A-arco e flecha\n");
			printf("C-cajado\n");
			scanf (" %c", &escolha);
			if(escolha=='E')
			{
				arma='E';
				printf("Ferreiro:Parabens, pode pegar sua espada jovem guerreiro(a)!Boa aventura para voce\n");
				printf("Narrador: Parabens jogador, sua arma agora eh:%c\n", arma);
			}
			if(escolha=='A')
			{
				arma='A';
				printf("Ferreiro:Otima escolha guerreiro(a), pegue seu arco e flecha aqui!Boa aventura para voce\n");
				printf("Narrador: Parabens jogador, sua arma agora eh:%c\n", arma);
			}
			if(escolha=='C')
			{
				arma='C';
				printf("Ferreiro:Distrubua muitas cajadadas por aí meu jovem! Boa aventura para voce!\n");
				printf("Narrador: Parabens jogador, sua arm agora eh:%c\n", arma);
			}
			
		}
		
		printf("Fadinha: Que otimo! Vi que ja escolheu sua arma, posso saber qual é?");
		printf("minha arma é essa:%c\n", arma);
		printf("Fadinha: Que boa escolha! Isso ira ser muit util a voce!\n");
		printf("Mas agora, preste bastante atençao, temos que ser rapidos.Voce deve me seguir ate a entrada da masmorra!\n");
		printf("Mas Fadinha, voce ira me guiar pela masmorra ou na entrada nos iremos dizer adeus?\n");
		printf("Fadinha:Nao, jamais vou deixa-lo(a) por ai,nos seremos amigos(as) agora, serei sua guia nesta brava aventura!\n");
		printf("Fadinha:Vamos, a escada é logo ali\n");
		printf("Narrador: Jogador, chegou a hora de se movimentar!, Aqui estão os movimentos permitidos a você:\n");
		printf("'w'-move você para cima\n");
		printf("'s'-move você para baixo\n");
		printf("'a'-move você para a esquerda\n");
		printf("'d'-move você para a direita\n");
		printf("Agora , esoclha qual movimento deseja fazer:\n");
		
		
		while(!(chegou_a_escada==1))
		{

            scanf(" %c",&movimento);

		printf(" %c", Mapa_Vila[v][e] );
		if(linha_jogador>0)
		{
			if(movimento=='w')
		{
			direcao='^';
			
			
			
			
			if(Mapa_Vila[linha_jogador-1][coluna_jogador]!='*')
			{
			
               if(Mapa_Vila[linha_jogador-1][coluna_jogador]=='L')
			   {
			   	chegou_a_escada=1;
			   	printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta");
			   }
			   else
			   {
				   
				   printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
			   }
			}
			if(Mapa_Vila[linha_jogador-1][coluna_jogador]!='*')
			{
             Mapa_Vila[linha_jogador][coluna_jogador]=' ';
				
			linha_jogador--;
			
			 Mapa_Vila[linha_jogador][coluna_jogador]='^';
			}
			
			for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
					printf(" %c", Mapa_Vila[v][e]);
				}
				printf("\n");
			}
			
			
			
		}
		}
        if(linha_jogador<9)
		{
				if(movimento=='s')
		{
			direcao='v';
			if(Mapa_Vila[linha_jogador+1][coluna_jogador]!='*')
			{
			
			if(Mapa_Vila[linha_jogador+1][coluna_jogador]=='L')
			{
				chegou_a_escada=1;
				printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta");
			}
			else
			{
				printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
			}
			
			
			}
			if(Mapa_Vila[linha_jogador+1][coluna_jogador]!='*')
			{
				Mapa_Vila[linha_jogador][coluna_jogador]=' ';
				linha_jogador++;
				Mapa_Vila[linha_jogador][coluna_jogador]='v';
			}
			
			for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
						printf(" %c", Mapa_Vila[v][e]);
					
				}
				printf("\n");
			}
			
		
			
		}
		}
	    if(coluna_jogador>0)
		{
			if(movimento=='a')
		{
			direcao='<';
			if(Mapa_Vila[linha_jogador][coluna_jogador-1]!='*')
			{
				
				if(Mapa_Vila[linha_jogador][coluna_jogador-1]=='L')
				{
					chegou_a_escada=1;
					printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta\n");
				}
				else
				{
					printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
				}
			}
			if(Mapa_Vila[linha_jogador][coluna_jogador-1]!='*')
			{
				Mapa_Vila[linha_jogador][coluna_jogador]=' ';
				coluna_jogador--;
				Mapa_Vila[linha_jogador][coluna_jogador]='<';
			}
			
			for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
						printf(" %c", Mapa_Vila[v][e]);
					
				}
				printf("\n");
			}
			
		
		}
		
		}
		if(coluna_jogador<9)
		{
		if(movimento=='d')
		{
			direcao='>';
		
         if(Mapa_Vila[linha_jogador][coluna_jogador+1]!='*')
		 {
		 	
            if(Mapa_Vila[linha_jogador][coluna_jogador+1]=='L')
			{
				chegou_a_escada=1;
				printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta");
				
			}
			else
			{
				printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
			}
		 }
		 if(Mapa_Vila[linha_jogador][coluna_jogador+1]!='*')
			{
				Mapa_Vila[linha_jogador][coluna_jogador]=' ';
				coluna_jogador++;
				Mapa_Vila[linha_jogador][coluna_jogador]='>';
			}
		 
		for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
					printf(" %c", Mapa_Vila[v][e]);
				}
				printf("\n");
			}
				
		}
		}	
		}
    linha_jogador=1;
    coluna_jogador=1;
    chegou_a_escada=0;
    pegou_a_chave;
    int linha_porta=8;
    int coluna_porta=7;
	direcao='>';
	printf("Fadinha:Jogador(a),Agora chegamos na parte dolorosa!Aqui voce deve aprender destruir obstaculos com sua arma, pegar a chave e sair da masmorra,avante!");
	char Mapa_Masmorra[10][10]={
	{'*','*','*','*','*','*','*','*','*','*'},
	{'*','>',' ',' ',' ','k',' ',' ',' ','*'},
	{'*',' ',' ','k','k','k','k',' ',' ','*'},
	{'*',' ',' ',' ','k','k','k','k',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ','k','@','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ','k','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ','D','L','*'},
	{'*','*','*','*','*','*','*','*','*','*'}};
	
	
	while(!(pegou_a_chave==1 && chegou_a_escada==1))
		{

            scanf(" %c",&movimento);

		printf(" %c", Mapa_Masmorra[v][e] );
		if(linha_jogador>0)
		{
			if(movimento=='w')
		{
			int linha_atacada=0;
			int coluna_atacada=0;
			direcao=='^';
			if(Mapa_Masmorra[linha_jogador-1][coluna_jogador]=='k')
			{
				printf("Jogador voce acertou um obstaculo! Deve realizar um ataque com sua arma para destrui-lo\n");
				if(arma=='E')
				{
				  for(linha_atacada=linha_jogador-2;linha_atacada<=linha_jogador;linha_atacada++)
				  {
				  	for(coluna_atacada=coluna_jogador-1;coluna_atacada<=coluna_jogador;coluna_atacada++)
					  {
					  	if(Mapa_Masmorra[linha_atacada][coluna_atacada]=='k')
						  {
						  	Mapa_Masmorra[linha_atacada][coluna_atacada]=' ';
						  	printf("Parabens jogador! Voce deu um corte certeiro no obstaculo\n");
						  }
					  }
					  
				  }
				}
				if(arma=='A')
				{ 
					int i;
					for(i=1;i<=4;i++)
					{
						if(Mapa_Masmorra[linha_jogador-i][coluna_jogador]=='k')
						{
							Mapa_Masmorra[linha_jogador][coluna_jogador]=' ';
							printf("Parabens jogador(a), voce flechou perfeitamente o obstaculo\n");
						}
					}
				}
				if(arma=='C')
				{
					for(linha_atacada=linha_jogador-1;linha_atacada<=linha_jogador;linha_atacada++)
					{
						for(coluna_atacada=coluna_jogador-1;coluna_atacada<= coluna_jogador;coluna_atacada++)
						{
							if(linha_atacada==linha_jogador && coluna_atacada==coluna_jogador)
							{
								continue;
					    	}
					    	if(Mapa_Masmorra[linha_atacada][coluna_atacada]=='k')
							{
								Mapa_Masmorra[linha_atacada][coluna_atacada]=' ';
								printf("Parabens, voce evaporou todos os obstaculos\n");
							}
						}
						
					}
				}
			}
		    else
			{
				if(Mapa_Masmorra[linha_jogador-1][coluna_jogador]!='*')
			{
             Mapa_Masmorra[linha_jogador][coluna_jogador]=' ';
				
			linha_jogador--;
			
			 Mapa_Masmorra[linha_jogador][coluna_jogador]='^';
			}
			
			for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
					printf(" %c", Mapa_Masmorra[v][e]);
				}
				printf("\n");
			}
			}
			
			
			
			
		}
		}
        if(linha_jogador<9)
		{
				if(movimento=='s')
		{
			direcao='v';
			if(Mapa_Masmorra[linha_jogador+1][coluna_jogador]!='*')
			{
				if(Mapa_Masmorra[linha_jogador+1][coluna_jogador]=='@')
				{
					
				pegou_a_chave=1;
				printf("Voce chegou na chave!Pegue-a", pegou_a_chave);
				chave='@';
				}
				else
				{
						printf("Jogador(a) voce ainda nao encontrou a chave, continue andando!\n");
				}
			
			if(Mapa_Masmorra[linha_jogador+1][coluna_jogador]=='L')
			{
				chegou_a_escada=1;
				printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta");
			}
			else
			{
				printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
			}
			
			
			}
			if(Mapa_Masmorra[linha_jogador+1][coluna_jogador]!='*')
			{
				Mapa_Masmorra[linha_jogador][coluna_jogador]=' ';
				linha_jogador++;
				Mapa_Masmorra[linha_jogador][coluna_jogador]='v';
			}
			
			for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
						printf(" %c", Mapa_Masmorra[v][e]);
					
				}
				printf("\n");
			}
			
		
			
		}
		}
	    if(coluna_jogador>0)
		{
			if(movimento=='a')
		{
			direcao='<';
			if(Mapa_Masmorra[linha_jogador][coluna_jogador-1]!='*')
			{
				if(Mapa_Masmorra[linha_jogador][coluna_jogador-1]=='@')
				{
					pegou_a_chave=1;
					printf("Parabens voce chegou na chave!Pegue-a", pegou_a_chave);
					chave='@';
				}
				else
				{
						printf("Jogador(a) voce ainda nao encontrou a chave, continue andando!\n");
				}
				if(Mapa_Masmorra[linha_jogador][coluna_jogador-1]=='L')
				{
					chegou_a_escada=1;
					printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta\n");
				}
				else
				{
					printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
				}
			}
			if(Mapa_Masmorra[linha_jogador][coluna_jogador-1]!='*')
			{
				Mapa_Masmorra[linha_jogador][coluna_jogador]=' ';
				coluna_jogador--;
				Mapa_Masmorra[linha_jogador][coluna_jogador]='<';
			}
			
			for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
						printf(" %c", Mapa_Masmorra[v][e]);
					
				}
				printf("\n");
			}
			
		
		}
		
		}
		if(coluna_jogador<9)
		{
		if(movimento=='d')
		{
			direcao='>';
		
         if(Mapa_Masmorra[linha_jogador][coluna_jogador+1]!='*')
		 {
		 	if(Mapa_Masmorra[linha_jogador][coluna_jogador+1]=='@')
			 {
			 	pegou_a_chave=1;
			 	printf("Parabens voce chegou na chave!Pegue-a", pegou_a_chave);
                chave='@';
			 }
			 else
			 {
				 	printf("Jogador(a) voce ainda nao encontrou a chave, continue andando!\n");
			 }
            if(Mapa_Masmorra[linha_jogador][coluna_jogador+1]=='L')
			{
				chegou_a_escada=1;
				printf("Voce chegou na escada Jogador!, Hora de ir ao Proximo nivel, pegue a chave e abra a porta");
				
			}
			else
			{
				printf("Jogador(a) voce ainda nao chegou na escada,continue andando!\n");
			}
		 }
		 if(Mapa_Masmorra[linha_jogador][coluna_jogador+1]!='*')
			{
				Mapa_Masmorra[linha_jogador][coluna_jogador]=' ';
				coluna_jogador++;
				Mapa_Masmorra[linha_jogador][coluna_jogador]='>';
			}
		 
		for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
					printf(" %c", Mapa_Masmorra[v][e]);
				}
				printf("\n");
			}
				
		}
		}	
		}
    char botao=' ';
	int  acao=' ';
	char resposta=' '; 
	printf("Fadinha:Parabens jogador(a)! Voce chegou na porta da masmorra, agora abra ela");
	printf("Narrador:Jogador(a) lembre-se: Para fazer qualquer movimento, aperte 'O'");
	printf("Deseja passar para o proximo nivel?(S/N)");
	scanf(" %c", &resposta);
	if(resposta=='S' || resposta=='s')
	{
		printf("Que otima noticia, para avançar de nivel, por favor pegue  a chave e abra a porta");
		scanf(" %c", &botao);
	
	if(botao=='O')
	{
		printf("O que deseja fazer, Jogador(a)?");
		printf("1- Abrir uma passagem secreta\n");
		printf("2- Adicionar espinhos ao mapa\n");
		printf("3- Ativar armadilhas\n");
		printf("4- Invocar novos monstros");
		printf("5- Remover uma barreira bloqueando o caminho\n");
		printf("6- Abrir uma porta com o auxilio da chave\n");
		scanf("%d", &acao);
		if(acao==6)
		{ 
			if(pegou_a_chave==1)
			{
				printf("Abra a porta com a chave encontrada, Jogador(a)\n");
				Mapa_Masmorra[linha_porta][coluna_porta]='=';
				Mapa_Masmorra[v][e]=Mapa_Masmorra[linha_porta][coluna_porta];
            
            for(v=0;v<10;v++)
			{
				for(e=0;e<10;e++)
				{
					printf(" %c", Mapa_Vila[v][e]);
				}
				printf("\n");
			}
			}
			else
			{
				printf("Jogador(a), voce nao pode abrir a porta pois nao tem a chave");
			}
		}
		
	}
	}
	if(resposta=='N' || resposta=='n')
	{
		printf("que pena, parece que sua jornada acaba aqui!");
		break;
	}
	
	
	}
	
	
	if(r==2)
	{
		int escolha;
		printf("Ora, ora, ora, vejo que temos um jogador curioso para saber como jogar da forma correta\n");
		printf("Seja muito bem vindo meu caro(a) jogador(a), apartir de agora voce conhecera um mundo de magia, aventuras e muitos muitos misterios\n");
		printf("mas diga-me , qual dessas voce gostaria de saber primeiro?:\n");
		printf("1-Saber o que significa cada simbolo do jogo\n");
		printf("2-conhecer a historia do jogo\n");
		printf("3-saber o o botao do jogo faz\n");
		scanf("%d", &escolha);
		if(escolha==1)
		{
			printf("Caro(a) jogador(a), nesta sessão irei lhe explicar o que cada simbolo que voce vera significa, a fim de que voce tenha uma boa experiencia e nao fique perdido\n");
			printf("Caso se depare com isso '*' saiba que eh uma parede, logo nao eh possivel ultrapassar\n");
			printf("Caso se depare com isso '#', saiba que eh um espinho, se voce tentar passar por ele, voce morre\n");
			printf("Caso se depare com isso 'k', saiba que eh uma caixa, ela não pode ser ultrappasada mas pode ser destruida com ataques");
			printf("Caso se depare com isso '@', saiba que eh uma chave e ela abre as portas fechadas quando ha interaçao com ela\n");
			printf("Caso se depare com isso 'D', indica que eh uma porta fechada e so pode ser aberta se voce tiver uma chave\n");
			printf("Caso se depare com isso '=', indica que a porta esta aberta e voce pode passar por ela\n");
			printf("Caso se depare com isso 'L', indica que voce achou uma escada, suba ela e isso lhe levara para o proximo nivel\n");
			printf("Ao ver isso 'x', saiba que eh um mostro do tipo 1\n");
			printf("Ao ver isso 'Y', saiba que eh um monstro do tipo 2\n");
			printf("Ao ver isso 'Z', saiba que eh o mostro mais forte entre os tres, ele eh conhecido como BOSS, tenha muito cuidado com ele\n");
        }
        if(escolha==2)
		{
			printf("Jogador(a), agora irei lhe introduzir a historia da sua missao.");
			printf("Durante muitos anos, os moradores de Dugeon Village sao atormentados por monstros ferozes que os caçam e matam, ano apos ano a vida dessas pessoas eh assim.\n");
			printf("Como se espera de um bravo(a) guerreiro(a) voce deverá enfrentar esses monstros e passar por todos os perigos que o/a esperam, mas lembre-se: evite perigos desnecessários, lute com bravura e o mais importante, livre essas pessoas das garras brutais dessas feras\n"); 
		    
		}   
		if(escolha==3)
		{
			printf("o botao 'O' faz as seguintes funçoes abaixo:\n");
			printf("Primeira funçao:Abrir uma passagem secreta\n");
			printf("Segunda funçao:Adicionar espinhos ao mapa\n");
			printf("Terceira funçao:Ativar armadilhas\n");
			printf("Quarta funçao:Invocar novos monstros\n");
			printf("Quinta funçao:Remover uma barreira bloqueando o caminho\n");
			printf("Sexta funçao: Abrir a porta com auxilio da chave\n");
		}
	}  
	
	
	
	
	
	
	
}while(r!=3);
	return 0;
}
		
