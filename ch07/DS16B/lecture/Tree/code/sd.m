function [x, niter] = sd(A, b)
n = size(A, 1);
iter_max = 20000;
tol = 1e-6;
x = zeros(n, 1);
r = b - A * x;
p = A * r; 
niter = 1;
tol = 1e-6;
while norm(r) > tol && niter < iter_max
    niter = niter + 1;
    alpha = r' * r / (p' * r);
    x = x + alpha * r;   
    r = r - alpha * p;
    p = A * r;    
end


