'''
  This program showss the points gained by teams after match ends.
'''

class Sports():
    def __init__(self, home_goal, away_goals):
        self.home_goal = home_goal
        self.away_goals = away_goals

    def addPoints(self):
        home_points = 0
        away_points = 0
        if self.home_goal > self.away_goals:
            home_points += 3
        elif self.home_goal == self.away_goals:
            away_points += 1
            homw_points += 1
        else:
          away_points += 3

        print(f"For this week, Home team points gained = {home_points}, and Away team points gained = {away_points}")

ManUtd_ManCty = Sports(2, 1)

ManUtd_ManCty.addPoints(
