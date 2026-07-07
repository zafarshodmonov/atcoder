
def sv(a, b):
  if a > b * (2/3):
    print('Yes')
  else:
    print('No')
    
def main():
  a, b = map(int, input().split())
  sv(a, b)
  
if __name__ == "__main__":
  main()
  