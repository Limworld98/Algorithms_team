#pragma once
#include <vector>
using namespace std;

vector<vector<vector<int>>> blueprints = {
	{
		// 테스트 용
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}
	},
	{
		//성현 동아 아파트 86 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,1,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1},
		{1,0,0,1,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
		{1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,1,1,1},
		{1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,1},
		{1,0,0,1,0,0,2,0,0,1,0,0,1,0,0,0,0,1,1,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		//성현 동아 아파트 108 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,1,1,1,1,1,1,0,0,0,0,1},
		{1,1,0,0,1,0,0,0,1,1,1,0,0,1,1},
		{1,0,0,0,1,0,0,0,1,1,0,0,0,0,1},
		{1,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,1,0,0,0,0,1,1,1,1,1,1},
		{1,1,1,0,1,0,0,0,0,1,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
		{1,1,1,0,0,0,0,1,0,1,1,1,0,1,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
		{1,2,0,0,0,0,0,1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
		{1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		//성현 동아 아파트 141 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1},
		{1,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,1,0,1,1,0,1,1,0,1,1,0,0,1,1},
		{1,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,1,1,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
		{1,1,1,1,0,1,0,0,0,0,0,0,1,0,1,1,1,0,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,1,2,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,1,0,0,1,1,1,0,0,1,0,0,1,1,1,0,0,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		//압구정 현대아파트 84 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,1,0,0,1,0,1,1,1},
		{1,0,0,0,0,0,1,1,0,0,1,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,1,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,1,0,0,0,1},
		{1,1,1,1,0,1,1,0,0,0,1,0,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
		{1,2,0,0,0,0,0,1,0,0,0,0,0,0,1},
		{1,1,1,0,0,1,1,1,1,1,0,0,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 현대 아파트 82.5 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,1,2,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1},
		{1,0,0,0,0,0,1,1,0,0,1,1,1,1,1,1,0,1,1},
		{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,1,1,1,1,1,1,1,0,0,1,0,1,0,1,1,1,1},
		{1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 현대 아파트 82.23 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,1,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,1,1,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1,0,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,0,0,0,0,0,1},
		{1,0,1,2,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
		{1,0,1,0,0,0,0,0,0,0,0,0,1,1,1},
		{1,0,1,1,1,1,1,1,1,1,0,0,1,0,1},
		{1,0,1,0,0,0,0,0,0,1,0,0,1,0,1},
		{1,0,0,0,0,0,1,0,0,1,0,0,1,0,1},
		{1,0,0,0,0,0,1,0,0,1,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 현대 아파트 108.8 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,0,1},
		{1,0,0,0,1,0,0,1,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,1,0,0,1,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,1,0,0,1,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1},
		{1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,1},
		{1,0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,1},
		{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 현대 아파트 108.15 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1},
		{1,1,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
		{1,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1},
		{1,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1},
		{1,1,0,0,1,1,1,0,0,1,1,1,1,0,0,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 현대 아파트 108.4 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,1,0,1,0,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
		{1,0,1,2,0,0,0,0,0,0,1,1,0,1,1,1,1},
		{1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1},
		{1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
		{1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 한양아파트 66 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
		{1,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,0,0,1,1,1,0,1,1,1,1},
		{1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 압구정 한양아파트 89 m2
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
		{1,0,1,0,0,0,0,1,1,0,1,1,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1},
		{1,0,1,2,0,0,0,0,0,0,1,0,1,1,1,1,1},
		{1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1},
		{1,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 이천 동양 파라곤
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,0,1,0,0,1,1,1,1,1,0,1,1,1,1,1,1},
		{1,1,1,0,1,0,0,1,1,0,0,0,0,1,1,1,1,1,1},
		{1,0,1,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,1},
		{1,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,1},
		{1,0,0,0,1,0,1,1,0,0,0,0,0,1,1,1,0,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1},
		{1,0,0,0,0,1,1,1,0,1,0,0,0,1,0,0,0,1,1},
		{1,1,1,0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,1},
		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1},
		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0,1,1,1},
		{1,0,0,0,0,1,0,0,0,1,2,0,0,0,0,0,0,1,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 이천 선경 2차 아파트
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,0,0,1,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,1,0,1,1,1,1,0,1,1,1,0,0,1,1},
		{1,0,0,0,1,0,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,1,0,0,0,0,1,1,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1,1,0,0,0,1},
		{1,1,1,1,1,0,0,0,1,1,1,0,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,2,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
		{1,1,1,0,0,1,1,1,1,0,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 송정 신일아파트
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,1,1,1,0,1,1,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1},
		{1,1,1,1,1,0,1,0,0,0,0,0,0,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
		{1,1,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
		{1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1},
		{1,1,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,1},
		{1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
	{
		// 양산 우미린아파트 59A
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,0,0,0,0,1,0,1,1,1,1,0,0,0,0,1},
		{1,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,1},
		{1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1},
		{1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
		{1,1,1,1,0,1,0,0,0,0,0,0,1,0,1,1,0,1,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,1,1,1,1,1,2,0,0,0,0,0,1,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	},
};