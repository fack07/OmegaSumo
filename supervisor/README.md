# 🧩 Supervisor – Controle Supervisório (Omega Sumo)

Este diretório contém o **modelo supervisório completo** do robô de sumô autônomo de 3 kg, desenvolvido como parte do Trabalho de Conclusão de Curso de Engenharia de Computação (UTFPR).

---

## ⚙️ Descrição
O arquivo principal `omega_sumo.wmod` foi criado utilizando o software **Supremica** e reúne toda a modelagem do sistema, incluindo:

- **Plantas**: modelagem modular dos componentes do robô;  
- **Especificações**: definição das regras e estratégias de controle;  
- **Supervisor**: resultado da **síntese supervisória** após a composição síncrona entre plantas e especificações.

O modelo é usado para gerar o **supervisor implementável**, posteriormente convertido para uma **máquina de estados Moore** e integrado ao firmware do microcontrolador STM32.

---

## 🧠 Ferramenta Utilizada
- **Supremica** – Software para modelagem e análise de sistemas a eventos discretos (uso acadêmico e de pesquisa).  

---

## 🧩 Formato do Arquivo
- `omega_sumo.wmod` – Projeto do Supremica contendo todos os autômatos do sistema.

O arquivo pode ser aberto diretamente no Supremica para visualização, edição e execução da síntese supervisória.

---

## 📜 Observação de Licença
O modelo foi desenvolvido com o Supremica, software **gratuito para uso acadêmico e de pesquisa**.  
Nenhum componente proprietário do Supremica é distribuído neste repositório.

---

## ✍️ Autor
**Fabio Kinukawa**  
Trabalho de Conclusão de Curso – Engenharia de Computação  
UTFPR – Universidade Tecnológica Federal do Paraná
Campus Pato Branco

