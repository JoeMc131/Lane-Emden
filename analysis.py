import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv('data/test_star.csv')

df.plot.line('xi', 'theta')
plt.show()