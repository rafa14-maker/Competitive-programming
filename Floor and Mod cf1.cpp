#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>st;
    int counter=0;
    map<int,int>mp;
    for(int i=2;i<=200;i++)
    {
        for(int j=2;j<=i;j++)
        {
            int sum=i/j;
            int m=i%j;
            if(sum==m)
            {
               mp[i]++;
            }
        }
    }
   // for(int i=2;i<=200;i++)cout<<i<<" "<<mp[i]<<endl;
}

/*
3 2
4 3
5 4
6 5
7 6
8 3
8 7
9 8
10 4
10 9
11 10
12 5
12 11
13 12
14 6
14 13
15 4
15 14
16 7
16 15
17 16
18 5
18 8
18 17
19 18
20 9
20 19
21 6
21 20
22 10
22 21
23 22
24 5
24 7
24 11
24 23
25 24
26 12
26 25
27 8
27 26
28 6
28 13
28 27
29 28
30 9
30 14
30 29
31 30
32 7
32 15
32 31
33 10
33 32
34 16
34 33
35 6
35 34
36 8
36 11
36 17
36 35
37 36
38 18
38 37
39 12
39 38
40 7
40 9
40 19
40 39
41 40
42 13
42 20
42 41
43 42
44 10
44 21
44 43
45 8
45 14
45 44
46 22
46 45
47 46
48 7
48 11
48 15
48 23
48 47
49 48
50 9
50 24
50 49
51 16
51 50
52 12
52 25
52 51
53 52
54 8
54 17
54 26
54 53
55 10
55 54
56 13
56 27
56 55
57 18
57 56
58 28
58 57
59 58
60 9
60 11
60 14
60 19
60 29
60 59
61 60
62 30
62 61
63 8
63 20
63 62
64 15
64 31
64 63
65 12
65 64
66 10
66 21
66 32
66 65
67 66
68 16
68 33
68 67
69 22
69 68
70 9
70 13
70 34
70 69
71 70
72 11
72 17
72 23
72 35
72 71
73 72
74 36
74 73
75 14
75 24
75 74
76 18
76 37
76 75
77 10
77 76
78 12
78 25
78 38
78 77
79 78
80 9
80 15
80 19
80 39
80 79
81 26
81 80
82 40
82 81
83 82
84 11
84 13
84 20
84 27
84 41
84 83
85 16
85 84
86 42
86 85
87 28
87 86
88 10
88 21
88 43
88 87
89 88
90 14
90 17
90 29
90 44
90 89
91 12
91 90
92 22
92 45
92 91
93 30
93 92
94 46
94 93
95 18
95 94
96 11
96 15
96 23
96 31
96 47
96 95
97 96
98 13
98 48
98 97
99 10
99 32
99 98
100 19
100 24
100 49
100 99
101 100
102 16
102 33
102 50
102 101
103 102
104 12
104 25
104 51
104 103
105 14
105 20
105 34
105 104
106 52
106 105
107 106
108 11
108 17
108 26
108 35
108 53
108 107
109 108
110 21
110 54
110 109
111 36
111 110
112 13
112 15
112 27
112 55
112 111
113 112
114 18
114 37
114 56
114 113
115 22
115 114
116 28
116 57
116 115
117 12
117 38
117 116
118 58
118 117
119 16
119 118
120 11
120 14
120 19
120 23
120 29
120 39
120 59
120 119
121 120
122 60
122 121
123 40
123 122
124 30
124 61
124 123
125 24
125 124
126 13
126 17
126 20
126 41
126 62
126 125
127 126
128 15
128 31
128 63
128 127
129 42
129 128
130 12
130 25
130 64
130 129
131 130
132 21
132 32
132 43
132 65
132 131
133 18
133 132
134 66
134 133
135 14
135 26
135 44
135 134
136 16
136 33
136 67
136 135
137 136
138 22
138 45
138 68
138 137
139 138
140 13
140 19
140 27
140 34
140 69
140 139
141 46
141 140
142 70
142 141
143 12
143 142
144 15
144 17
144 23
144 35
144 47
144 71
144 143
145 28
145 144
146 72
146 145
147 20
147 48
147 146
148 36
148 73
148 147
149 148
150 14
150 24
150 29
150 49
150 74
150 149
151 150
152 18
152 37
152 75
152 151
153 16
153 50
153 152
154 13
154 21
154 76
154 153
155 30
155 154
156 25
156 38
156 51
156 77
156 155
157 156
158 78
158 157
159 52
159 158
160 15
160 19
160 31
160 39
160 79
160 159
161 22
161 160
162 17
162 26
162 53
162 80
162 161
163 162
164 40
164 81
164 163
165 14
165 32
165 54
165 164
166 82
166 165
167 166
168 13
168 20
168 23
168 27
168 41
168 55
168 83
168 167
169 168
170 16
170 33
170 84
170 169
171 18
171 56
171 170
172 42
172 85
172 171
173 172
174 28
174 57
174 86
174 173
175 24
175 34
175 174
176 15
176 21
176 43
176 87
176 175
177 58
177 176
178 88
178 177
179 178
180 14
180 17
180 19
180 29
180 35
180 44
180 59
180 89
180 179
181 180
182 25
182 90
182 181
183 60
183 182
184 22
184 45
184 91
184 183
185 36
185 184
186 30
186 61
186 92
186 185
187 16
187 186
188 46
188 93
188 187
189 20
189 26
189 62
189 188
190 18
190 37
190 94
190 189
191 190
192 15
192 23
192 31
192 47
192 63
192 95
192 191
193 192
194 96
194 193
195 14
195 38
195 64
195 194
196 27
196 48
196 97
196 195
197 196
198 17
198 21
198 32
198 65
198 98
198 197
199 198
200 19
200 24
200 39
200 49
200 99
200 199
*/


