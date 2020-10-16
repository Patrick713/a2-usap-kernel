cmd_net/sched/sch_sfq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_sfq.ko net/sched/sch_sfq.o net/sched/sch_sfq.mod.o;  true
