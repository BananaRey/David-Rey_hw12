import numpy as np
import matplotlib.pyplot as plt

archivo=np.loadtxt('advection.txt')

x=archivo[:,0]
u_0=archivo[:,1]
u_1=archivo[:,2]
u_2=archivo[:,3]
u_4=archivo[:,4]
u_new=archivo[:,5]

plt.plot(x,u_0)
plt.plot(x,u_1)
plt.plot(x,u_2)
plt.plot(x,u_3)
plt.plot(x,u_4)
plt.plot(x,u_new)
plt.ylim(0.0,1.0)
plt.title('Difusion',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.show()
plt.savefig('Difusion.png')
plt.close()
