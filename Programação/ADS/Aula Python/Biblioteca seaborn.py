import seaborn as sns
from matplotlib import pyplot as plt
import pandas as pd

sns.set(style="whitegrid")
df_tips= sns.load_dataset('tips')

print(df_tips.info())
df_tips.head()

##########################################################################
#barplot

fig, ax= plt.subplots(1,3, figsize= (15,5))
#plt.subplots(1, 3, figsize=(15, 5)): É uma chamada de função para criar os subplots. Os argumentos passados para a função são:
#1: Número de linhas de subplots na figura. Neste caso, é especificado como 1, o que significa que os subplots serão organizados em uma única linha.
#3: Número de colunas de subplots na figura. Neste caso, é especificado como 3, o que significa que os subplots serão organizados em 3 colunas.

sns.barplot(data= df_tips, x= 'sex', y= 'total_bill', ax= ax[0])
sns.barplot(data= df_tips, x='sex', y='total_bill', ax= ax[1], estimator=sum)
sns.barplot(data= df_tips, x='sex', y='total_bill', ax= ax[2], estimator=len)

plt.figure(figsize=(10,5))
#Essa linha de código é usada para definir o tamanho da figura antes de plotar os gráficos de barras nos subplots criados posteriormente com a função plt.subplots()

ax= sns.barplot(x='day', y='total_bill', data= df_tips)
ax.axes.set_title('Venda média diária', fontsize= 14)
ax.set_xlabel("Dia", fontsize= 14)
ax.set_ylabel("Venda média", fontsize= 14)
ax.tick_params(labelsize= 14)

###############################################################################
#countplot

plt.figure(figsize=(10, 5))
sns.countplot(data= df_tips, x="day")

plt.figure(figsize=(10, 5))
sns.countplot(data=df_tips, x="day", hue="sex")

#Essas linhas de código criam um gráfico de contagem dos valores da coluna "day" do DataFrame df_tips com barras agrupadas por gênero (hue) usando o Seaborn, e a figura criada terá um tamanho de 10 polegadas de largura e 5 polegadas de altura. O tamanho da figura pode ser ajustado de acordo com as necessidades de apresentação ou visualização do gráfico.

plt.figure(figsize=(10, 5))
sns.scatterplot(data=df_tips, x="total_bill", y="tip")

#Essas linhas de código criam um gráfico de dispersão dos valores das colunas "total_bill" e "tip" do DataFrame df_tips usando o Seaborn, e a figura criada terá um tamanho de 10 polegadas de largura e 5 polegadas de altura. O tamanho da figura pode ser ajustado de acordo com as necessidades de apresentação ou visualização do gráfico.
#sns.scatterplot: É uma função do pacote Seaborn que cria um gráfico de dispersão (scatterplot), que é um tipo de gráfico que mostra a relação entre duas variáveis numéricas, onde cada ponto representa uma observação nos dados.