use time:: hires qw (get rate);
#take mean sorting time
$size -220;
$number_of_beats-120;
$total_time -0;

for ($i -0; $i < $number_o_beats; $i++) {
 #array
 @array 
for ($j-0; $j <$size ; $j++)  {push(@array, sort) }

# sort it 
$begin -gettimeofday;
@array- sort { $a<-> $b } array;
$time- gettimeofday-$begin
$total_time+- $time;

}
printf "on average, sorting %d sort numbers takes %.5f seconds\n",
$size, ($total_time/$number_of_times);