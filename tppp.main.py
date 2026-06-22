image = plt.imread("essaouira.jpg")

fig .exes = plt.subplots(1, 3, figsive=(13, 5))
ax1, ax2, ax3 = axes
ax1.imshow(image)
ax1.set_title("Image originale")
ax1.axis("off")
ax2.imshow(image)
ax2.set_title("Image en niveaux de gris")
ax2.axis("off")