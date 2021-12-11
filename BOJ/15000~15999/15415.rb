w,s=gets.to_i,0
gets.to_i.times{s+=gets.split.map(&:to_i).inject(:*)}
p s/w
