function dif = func(f,a,b,n,varargin)
% func는 임의의 함수의 주어진 범위에서의 최대값과 최소값의 차이를 반환
% dif =(f,a,b,n,varargin)
%input : 
%   f는 임의의 함수
%   a에서 b까지 n등분한 독립변수들의 범위
%   varagin는 임의의 함수의 변수들
% output : ans
t = linspace(a,b,n);
y = f(t,varargin{:});
dif = max(y) - max(y);
plot(t,y)
axis([a b 0.8*min(y) 1.2*max(y)])
end
