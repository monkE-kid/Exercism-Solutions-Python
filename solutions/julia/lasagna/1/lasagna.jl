const expected_bake_time = 60

preparation_time(layers) = layers * 2

function remaining_time(spent_time)
    return expected_bake_time - spent_time
end

total_working_time(layers, spent_time) = (layers * 2) + spent_time


