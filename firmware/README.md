# 🧠 Firmware – Robô de Sumô Autônomo (Omega Sumo)

Este diretório contém o **firmware embarcado** desenvolvido para o robô de sumô autônomo de 3 kg.  
O código foi implementado em **C** utilizando o **STM32CubeIDE**, com foco em controle de motores, leitura de sensores e execução das ações determinadas pelo supervisor.

---

## ⚙️ Estrutura
- `Core/` – Código principal gerado pelo CubeIDE (funções do sistema embarcado).  
- `Drivers/` – Bibliotecas de periféricos do STM32.  
- `Src/` e `Inc/` – Arquivos de código-fonte e cabeçalhos do projeto.  
- `STM32F407VETX_FLASH.ld` – Script de linkagem do microcontrolador.  

---

## 🧩 Plataforma
- **Microcontrolador:** STM32F407VET6  
- **IDE:** STM32CubeIDE  
- **Linguagem:** C  
- **Compilador:** ARM GCC  
- **Memória ocupada:** ~352 KB de Flash  

---

## 🔗 Integração com o Supervisor
O firmware implementa uma **máquina de estados Meely** gerada a partir do autômato supervisor, compilada e integrada ao código principal.  
A comunicação entre o supervisor e o firmware ocorre por meio de variáveis de evento (entradas e saídas do sistema).

---

## 🧰 Compilação e Gravação
1. Abra o projeto no **STM32CubeIDE**.  
2. Selecione a placa alvo `STM32F407VET6`.  
3. Compile (`Project → Build Project`).  
4. Faça o upload via **ST-LINK/V2** ou programador compatível.

---

## 📄 Licença
Uso educacional e acadêmico.  
Parte do código foi gerado automaticamente pelo STM32CubeIDE.  
Distribuição permitida apenas para fins de pesquisa e documentação.

---

## ✍️ Autor
**Fabio Kinukawa**  
Trabalho de Conclusão de Curso – Engenharia de Computação  
UTFPR – Universidade Tecnológica Federal do Paraná
Campus Pato Branco

