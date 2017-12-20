clear;
tau = [2 5 10 20 50];
for k = 1:length(tau)
    A = diag([1,tau(k),tau(k)^2]);
    b = [-1 -1 -1]';
    [x, niter] = sd(A, b);
    niter
end