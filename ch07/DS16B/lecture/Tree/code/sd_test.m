A = [2 -1; -1 2];
b = [2; 3];
t = 2:0.1:3;
[x1, x2] = meshgrid(t);
z = A(1,1)*x1.^2+2*A(1,2)*x1.*x2+A(2,2)*x2.^2 ...
    -2*b(1)*x1-2*b(2)*x2;
surf(x1,x2,z)
[x, niter] = sd(A, b)