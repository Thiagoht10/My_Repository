import pandas as pd
import requests

url= 'https://www.fdic.gov/bank/individual/failed/banklist.html'
dps= pd.read_html(url)

print(type(dps))
print(len(dps))

