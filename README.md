## qt-fsarchiver

 이 저장소의 코드는 한글로 번역을 완료하고 하모니카OS SUN 에서 테스트된 버전입니다.

 * qt-fsarchiver 는 파티션을 백업 및 복구하는 프로그램입니다.
 * dd, tar, rsysnc 같은 백업 복구 프로그램 방식이 아니라 MBR을 포함한 파티션을 백업하고 복구할 수 있습니다.
 * 백업할 타겟 디스크가 마운트 해제 된 상태에서 사용해야 하므로 만약 사용 중인 시스템을 백업하려면 별도의 OS(live CD)로 부팅해야 사용 가능합니다.

## 주요기능
 * 여러개의 파티션이 있는 경우에도 전체 파티션을 백업하여 하나씩 선택하여 복구할 수 있습니다.
 * 백업파일 암호로 보호
 * 50% 정도의 데이터 압축률
 * 다양한 포멧의 백업방식 지원

## debian binary build from repo
```
dpkg-buildpackage -b -rfakeroot -us -uc
```


## build with sign from apt
```
apt sourge qt-fsarchiver
cd qt-fsarchiver*/
dpkg-buildpackage 
```