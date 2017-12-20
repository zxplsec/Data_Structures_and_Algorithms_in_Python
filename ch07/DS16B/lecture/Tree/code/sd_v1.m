function [x, niter] = sd_v1(A, b)
n = size(A, 1);
iter_max = 50;
tol = 1e-10;
x = zeros(n, iter_max);
x(:,1) = [2 2.5]';
r = b - A * x(:, 1);
p = A * r; 
niter = 1;
while norm(r) > tol && niter < iter_max
    niter =  niter + 1;
    alpha = r' * r / (p' * r);
    x(:, niter) = x(:, niter-1) + alpha * r;   
    r = r - alpha * p;
    p = A * r;    
end


