import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

filepath = "result/"
filename1 = ["randomMove_type1.csv", "spinMove_type1.csv", "zigzagMove_type1.csv"]
filename2 = ["randomMove_type2.csv", "spinMove_type2.csv", "zigzagMove_type2.csv"]
run_type = 2

if __name__ == '__main__':
    if run_type == 1:
        rm = pd.read_csv(filepath + filename1[0])
        sm = pd.read_csv(filepath + filename1[1])
        zm = pd.read_csv(filepath + filename1[2])

        # 시간 - 커버리지 그래프
        '''time_rm = rm.groupby(['제한시간'], as_index=False).mean()
        time_sm = sm.groupby(['제한시간'], as_index=False).mean()
        time_zm = zm.groupby(['제한시간'], as_index=False).mean()

        plt.plot(time_rm['제한시간'], time_rm['커버리지'], label='Random Move')
        plt.plot(time_sm['제한시간'], time_sm['커버리지'], label='Spin Move')
        plt.plot(time_zm['제한시간'], time_zm['커버리지'], label='Zigzag Move')

        plt.legend(loc='best')
        plt.xlabel('Time')
        plt.ylabel('Coverage')
        plt.show()'''

        # 시간 - 연산 횟수 그래프
        '''time_rm = rm.groupby(['제한시간'], as_index=False).mean()
        time_sm = sm.groupby(['제한시간'], as_index=False).mean()
        time_zm = zm.groupby(['제한시간'], as_index=False).mean()

        plt.plot(time_rm['제한시간'], time_rm['연산횟수'], label='Random Move')
        plt.plot(time_sm['제한시간'], time_sm['연산횟수'], label='Spin Move')
        plt.plot(time_zm['제한시간'], time_zm['연산횟수'], label='Zigzag Move')

        plt.legend(loc='best')
        plt.xlabel('Time')
        plt.ylabel('Cost')
        plt.show()'''

        # 시간 - 방향전환
        time_rm = rm.groupby(['제한시간'], as_index=False).mean()
        time_sm = sm.groupby(['제한시간'], as_index=False).mean()
        time_zm = zm.groupby(['제한시간'], as_index=False).mean()

        plt.plot(time_rm['제한시간'], time_rm['방향전환'], label='Random Move')
        plt.plot(time_sm['제한시간'], time_sm['방향전환'], label='Spin Move')
        plt.plot(time_zm['제한시간'], time_zm['방향전환'], label='Zigzag Move')

        plt.legend(loc='best')
        plt.xlabel('Time')
        plt.ylabel('Direction Change')
        plt.show()

    else:
        rm = pd.read_csv(filepath + filename2[0])
        sm = pd.read_csv(filepath + filename2[1])
        zm = pd.read_csv(filepath + filename2[2])

        # 맵크기 - 시간
        '''time_rm = rm.groupby(['맵크기'], as_index=False).mean()
        time_sm = sm.groupby(['맵크기'], as_index=False).mean()
        time_zm = zm.groupby(['맵크기'], as_index=False).mean()

        plt.plot(time_rm['맵크기'], time_rm['소요시간'], label='Random Move')
        plt.plot(time_sm['맵크기'], time_sm['소요시간'], label='Spin Move')
        plt.plot(time_zm['맵크기'], time_zm['소요시간'], label='Zigzag Move')

        plt.legend(loc='best')
        plt.xlabel('Map Size')
        plt.ylabel('Time')
        plt.show()'''

        # 시간 평균
        # fig, ax = plt.subplots()
        # ax.boxplot([rm['소요시간'], sm['소요시간'], zm['소요시간']])
        # plt.xticks([1, 2, 3], ['Random Move', 'Spin Move', 'Zigzag Move'])
        # plt.title('Time')
        # plt.show()

        # 시간 평균 랜덤 제외
        # fig, ax = plt.subplots()
        # ax.boxplot([sm['소요시간'], zm['소요시간']])
        # plt.title('Time')
        # plt.xticks([1, 2], ['Spin Move', 'Zigzag Move'])
        # plt.show()

        # 연산 평균
        # fig, ax = plt.subplots()
        # ax.boxplot([rm['연산횟수'], sm['연산횟수'], zm['연산횟수']])
        # plt.xticks([1, 2, 3], ['Random Move', 'Spin Move', 'Zigzag Move'])
        # plt.title('Compute Cost')
        # plt.show()

        # 연산 평균 랜덤 제외
        fig, ax = plt.subplots()
        ax.boxplot([sm['연산횟수'], zm['연산횟수']])
        plt.title('Compute Cost')
        plt.xticks([1, 2], ['Spin Move', 'Zigzag Move'])
        plt.show()

