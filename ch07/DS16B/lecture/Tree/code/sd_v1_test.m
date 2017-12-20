A = [2 -1; -1 2];
b = [2; 3];
t = 2:0.1:3;
[x1, x2] = meshgrid(t);
z = A(1,1)*x1.^2+2*A(1,2)*x1.*x2+A(2,2)*x2.^2 ...
    -2*b(1)*x1-2*b(2)*x2;
[x, niter] = sd_v1(A, b);
minz = min(min(z));
maxz = max(max(z));
v = [minz+1e-2 minz+5e-2 minz+1e-1 minz+5e-1 minz+1 maxz];
contour(x1,x2,z,v);
hold on;
drawArrow = @(x,y,varargin) quiver( x(1),x(2),y(1)-x(1),y(2)-x(2),0, ...
    varargin{:} );
for k = 1:niter-1
   drawArrow(x(:,k), x(:,k+1));
end
