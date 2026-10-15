np.random.seed(42)
x0 = np.random.rand(100, 2) * 0.8 + [2, 3]
x1 = np.random.rand(100, 2) * 1.0 + [-1, -1]
 
 plt.figure(figsize=(7, 6))
plt.scatter(x0[:, 0], x0[:, 1], color='steelbleu'
