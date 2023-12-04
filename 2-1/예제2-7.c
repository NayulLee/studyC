#include <stdio.h>

int main() {
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");

	return 0;
}



/*What does Git do?
	Repository(저장소)기반의 프로젝트 관리
	Clone : Git은 Repository에 저장되어 있는 프로젝트를 로컬(local)에 복사
	Commit : 코드 변화를 추적하기 위해 사용. 내가 만든 코드에 현재 버전을 특정 버전으로 등록할 때
			 코드의 스냅샷을 찍는 행동.
	Branch : 코드의 부분 수정, 버전 관리
	Pull : 프로젝트의 최신 버전 코드를 로컬에 업데이트
	Push : 로컬 코드를 프로젝트에 업데이트*/