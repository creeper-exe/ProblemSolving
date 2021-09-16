int getAbsSum(std::vector<int> arr) {
		int x=0;
  for (int y:arr)
  {
    x+= abs(y);
  }
  return x;
	
}
