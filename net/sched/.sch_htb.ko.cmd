cmd_net/sched/sch_htb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_htb.ko net/sched/sch_htb.o net/sched/sch_htb.mod.o;  true
