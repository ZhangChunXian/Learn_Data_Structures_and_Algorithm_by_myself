slice(format(prop("已完成") / prop("总章节数") * 100), 0, 4) + "%"

slice(format(prop("已完成") / prop("总章节数") * 100), 0, 4) + "%"

dateBetween(prop("截止日期"), prop("今日时间"), "days")

dataBetween(prop("今日时间"), prop("任务开始日期"), "days")

slice(format(prop("已完成") / prop("总章节数") * 100), 0, 4) + "%"

slice(format(prop("已过天数") / (prop("已过天数") + prop("剩余天数")) * 100), 0, 4) + "%"

round(prop("已完成") / prop("总章节数") * 10)

round(prop("已过天数") / (prop("已过天数") + prop("剩余天数")) * 10)

已完成：slice("✅✅✅✅✅✅✅✅✅✅", 0, prop("进度条格数"))

slice("✅✅✅✅✅✅✅✅✅✅", 0, prop("进度条格数"))

未完成： slice("⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜", 0, 10 - prop("进度条格数"))
