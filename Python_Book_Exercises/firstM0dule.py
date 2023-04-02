def add_up(a,b):
    return a+b

def printt(abc):
    a= print(abc)
    return a

msg_temp = """Hello {a}, we are glad to have you\
as a regular visitor to {b}, kindly enter your email here: {c}. Thank You!
"""

def d_msg(x='Joe', y='metry.org', z='xyz@uvw.com.'):
    mfomat=msg_temp.format(a=x, b=y, c=z)
    return mfomat
