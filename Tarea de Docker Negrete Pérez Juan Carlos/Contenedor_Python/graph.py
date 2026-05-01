import matplotlib.pyplot as plt

dias = [1, 2, 3, 4, 5]
precio = [62000, 63500, 61200, 64000, 65500]

plt.plot(dias, precio, marker='o', color='orange')
plt.title('Tendencia de BTC/USD (Últimos 5 días)')
plt.xlabel('Días')
plt.ylabel('Precio (USD)')
plt.grid(True)

plt.savefig('btc_usd_trend.png')
print("Gráfico btc_usd_trend.png generado con éxito.")