cmd_net/sched/sch_tbf.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_tbf.ko net/sched/sch_tbf.o net/sched/sch_tbf.mod.o;  true
